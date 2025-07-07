import React, { useEffect, useState } from "react";

const UseEffect = () => {
  const [count, setCount] = useState(0);
  const handleChange = () => {
    setCount((count) => count + 1);
  };

  useEffect(() => {
    console.log("Effect");
  }, []);
  return (
    <div>
      {console.log("Render")}
      <h1>Count:{count}</h1>
      <button onClick={handleChange}>+</button>
    </div>
  );
};

export default UseEffect;
