var nWon=0;
var nLost=0;
for(var i=0;i<5;i++){
  var guessNumber=parseInt(prompt("Enter number from 1 to 5: "));
  var randomNumber= Math.floor(Math.random()*5)+1;

  if(guessNumber==randomNumber){
    console.log("you have won");
       nWon++;
  }
  else
  console.log("you have Lost");
   nLost++;
}
document.write("Number of won :"+nWon+"<br>");
document.write("Number of lost :"+nLost+"<br>");