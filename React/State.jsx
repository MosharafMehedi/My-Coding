import React, { Component } from "react";

class State extends Component {
  constructor(props) {
    super(props);
    this.state = {
      count: 1,
    };
  }

  handleIncrement = () => {
    this.setState({
      count: this.state.count + 1,
    });
  };
  handleDecrement = () => {
    this.setState({
      count: this.state.count - 1,
    });
  };
  handleReset = () => {
    this.setState({
      count: 0,
    });
  };

  render() {
    const { count } = this.state;
    return (
      <div>
        <p className="he">Count: {count}</p>
        <button
          onClick={this.handleIncrement}
          disabled={count === 5 ? true : false}
        >
          +
        </button>
        <button
          onClick={this.handleDecrement}
          disabled={count === -5 ? true : false}
        >
          -
        </button>
        <button onClick={this.handleReset}>Reset</button>
      </div>
    );
  }
}

export default State;
