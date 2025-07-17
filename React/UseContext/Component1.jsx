import React, { useState } from "react";
import Component2 from "./components2";
import { UserContext } from "./userContext";
const Component1 = () => {
  const [user, setUser] = useState({ id: 302, name: "Mosharaf" });
  const [text, setText] = useState("hello I am text");
  return (
    <UserContext.Provider value={{ user, text }}>
      <Component2 />
    </UserContext.Provider>
  );
};

export default Component1;
