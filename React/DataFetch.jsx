import React, { useEffect, useState } from "react";

const DataFetch = () => {
  const [todos, setTodos] = useState(null);

  useEffect(() => {
    fetch("https://jsonplaceholder.typicode.com/todos")
      .then((res) => res.json())
      .then((data) => {
        setTodos(data);
      });
  }, []);
  return (
    <div>
      <h1>Fetch</h1>
      {todos &&
        todos.map((todo) => {
          return <p key={todo.id}>{todo.title}</p>;
        })}
    </div>
  );
};

export default DataFetch;
