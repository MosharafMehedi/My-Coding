for(var i=0;i<3;i++){
    document.querySelectorAll(".but")[i].addEventListener("click",function(){
     var text=this.innerHTML;
     console.log(text);
     audioplay(text);
     playanim(text);

    });

    function audioplay(text){
        switch(text){
            case "A":
                var audio=new Audio("A.mp3");
                audio.play();
                break;
    
                case "B":
                var audio=new Audio("B.mp3");
                audio.play();
                break;
    
                case "C":
                var audio=new Audio("C.mp3");
                audio.play();
                break;
         }

        
    }
    function playanim(text){
        var sbutton= document.querySelector("."+text);
        sbutton.classList.add("anim");

        setTimeout(function(){
            sbutton.classList.remove("anim");
        },1000);
     }
}