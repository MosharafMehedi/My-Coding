import React, { useEffect, useState } from "react";

const DataFetch2 = () => {
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
      {todos ? (
        <ul>
          {todos.slice(0, 10).map((todo) => (
            <li key={todo.id}>
              {todo.id}. {todo.title}
            </li>
          ))}
        </ul>
      ) : (
        <p>Loading...</p>
      )}
    </div>
  );
};

export default DataFetch2;
