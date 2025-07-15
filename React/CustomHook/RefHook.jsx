import React, { useRef } from "react";

const RefHook = () => {
  const userNameRef = useRef();
  const userPassRef = useRef();

  const handlesubmit = (event) => {
    event.preventDefault();
    const userName = userNameRef.current.value;
    const userPass = userPassRef.current.value;
    userPassRef.current.style.color = "red";
    console.log(userName, userPass);
  };
  return (
    <div>
      form
      <form action="" onSubmit={handlesubmit}>
        <div>
          <label htmlFor="user">Username</label>
          <input type="text" name="text" ref={userNameRef} />
        </div>
        <div>
          <label htmlFor="pass">Password</label>
          <input type="pass" name="pass" ref={userPassRef} />
        </div>
        <button type="submit">Submit</button>
      </form>
    </div>
  );
};

export default RefHook;
