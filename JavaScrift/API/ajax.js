function reqData() {
  //create new request object
  const xhr = new XMLHttpRequest();
  //receive request text
  xhr.onload = function () {
    const container = (document.getElementById("rock").innerHTML =
      xhr.responseText);
  };
  //request
  xhr.open("GET", "./myfile/data.txt");

  //send request
  xhr.send();
}
