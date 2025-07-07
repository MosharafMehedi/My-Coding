import React, { useState } from "react";
import "./App.css";
export default function Form() {
  const [Name, setName] = useState("");
  const [Email, setEmail] = useState("");
  const handleSubmit = (e) => {
    console.log("Form is submitted");
    e.preventDefault();
  };
  const handleName = (e) => {
    console.log(e.target.value);
  };
  const handlePassword = (e) => {
    console.log(e.target.value);
  };
  return (
    <div className="ok" onSubmit={handleSubmit}>
      <h1>Registration Form</h1>
      <form action="">
        <div>
          <label htmlFor="">Name: </label>
          <input
            type="text"
            name="Name"
            id="Name"
            required
            onChange={handleName}
          />
        </div>
        <div>
          <label htmlFor="">Password: </label>
          <input
            type="password"
            name="password"
            id="password"
            required
            onChange={handlePassword}
          />
        </div>
        <button type="submit">Registration</button>
      </form>
    </div>
  );
}
