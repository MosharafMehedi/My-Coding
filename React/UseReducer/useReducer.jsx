import React, { useState, useReducer } from "react";
import { reducer } from "./reducer";
import "./reducer.css";
const booksData = [
  { id: 1, name: "Pather Panchal" },
  { id: 2, name: "Padma Nadir Majhi" },
  { id: 3, name: "  Srikanta" },
];

const Modal = ({ modalText }) => {
  return <p>{modalText}</p>;
};

const initialState = {
  books: booksData,
  isModalOpen: false,
  modalText: "",
};
const UseReducer = () => {
  const [bookState, dispatch] = useReducer(reducer, initialState);
  const [bookName, setBookName] = useState("");

  const handleSubmit = (e) => {
    e.preventDefault();
    const newBook = { id: new Date().getTime().toString(), name: bookName };
    dispatch({ type: "ADD", payload: newBook });
    setBookName("");
  };

  const removeBook = (id) => {
    dispatch({ type: "REMOVE", payload: id });
  };
  return (
    <div>
      <h3>Book List</h3>
      <form onSubmit={handleSubmit}>
        <input
          className="border-2"
          type="text"
          value={bookName}
          onChange={(e) => {
            setBookName(e.target.value);
          }}
        />
        <button className="bg-green-500 border-2" type="submit">
          Add Book
        </button>
      </form>

      {bookState.isModalOpen && <Modal modalText={bookState.modalText} />}

      {bookState.books.map((book) => {
        const { id, name } = book;
        return (
          <li key={id}>
            {name}{" "}
            <button
              className="border-2 bg-red-500 "
              onClick={() => {
                removeBook(id);
              }}
            >
              Remove
            </button>
          </li>
        );
      })}
    </div>
  );
};

export default UseReducer;
