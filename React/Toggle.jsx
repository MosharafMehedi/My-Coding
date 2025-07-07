import React, { useState } from "react";

const Toggle = () => {
  const [toggle, setToggle] = useState(true);

  return (
    <div
      style={{
        margin: "1rem",
        background: "green",
        padding: "1rem",
        textAlign: "center",
      }}
    >
      {toggle && (
        <p>
          Lorem ipsum dolor sit amet, consectetur adipisicing elit. Eius sint
          placeat et ex, cumque in cupiditate? Nostrum eius vel dolorem, ullam,
          repudiandae iste, eligendi dolore tenetur debitis nihil quod
          laudantium!
        </p>
      )}
      <button
        onClick={() => {
          setToggle(!toggle);
        }}
      >
        {toggle ? "Hide" : "Show"}
      </button>
    </div>
  );
};

export default Toggle;
