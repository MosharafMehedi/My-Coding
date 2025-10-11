function myFunction() {
  const message = document.getElementById("p01");
  message.innerHTML = "";
  message.className = "";
  let x = document.getElementById("demo").value;

  try {
    if (x.trim() == "") throw "is empty";
    if (isNaN(x)) throw "is not a number";
    x = Number(x);
    if (x > 20) throw "is too high";
    if (x < 10) throw "is too low";

    message.innerHTML = "✅ Input is valid";
    message.className = "success";
  } catch (err) {
    message.innerHTML = "❌ Input " + err;
    message.className = "error";
  } finally {
    document.getElementById("demo").value = "";
  }
}
