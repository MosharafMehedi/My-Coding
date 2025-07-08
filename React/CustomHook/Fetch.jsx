import React from "react";
import useFetch from "./useFetch";

const Fetch = () => {
  const [data, setData] = useFetch(
    "https://jsonplaceholder.typicode.com/todos"
  );
  return (
    <div>
      <h1>Fetch</h1>
      {data ? (
        <ul>
          {data.slice(0, 10).map((todo) => (
            <li key={todo.id}>
              <h3>
                {todo.id} {todo.title}
              </h3>
            </li>
          ))}
        </ul>
      ) : (
        <p>Loading...</p>
      )}
    </div>
  );
};

export default Fetch;
