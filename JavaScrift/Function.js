function add(N1,N2){
    var result=N1+N2;
    return result;
  }

  var N=add(2,2);
  document.write(N +"</br>");

  var M=add(10,2);
  document.write(M);

  var a= parseFloat(prompt("Enter valur of a:"));
  var b= parseFloat(prompt("Enter valur of b:"));

(function sum(){

    var sum= a+b;
    document.write("Sum of your value="+ sum);
})();