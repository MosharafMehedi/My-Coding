function validation() {
  const inputob = document.getElementById("ok");
  if (inputob.validity.rangeOverflow) {
    inputob.setCustomerValidity("Number is over");
  } else if (inputob.validity.rangedownflow) {
    inputob.setCustomerValidity("Number is down");
  }

  if (!inputob.checkValidity()) {
    document.getElementById("checke").innerHTML = inputob.validationMessage;
  }
}
