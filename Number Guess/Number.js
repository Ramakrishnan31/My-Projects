let random = Math.floor(Math.random() * 10);
let guesses = 0;
console.log(random);

document.getElementById("button").onclick = function(){
    let guess = document.getElementById("index").value;
    guesses += 1;

    if(guess == ""){
        document.getElementById("guess").innerHTML = "First enter the number! in the input box,<b>You stupid!</b>";
    }
    else if(guess == random){
        document.getElementById("guess").innerHTML="You got "+guesses+" guess to find a number!";
    }
    else if(guess > random){
        document.getElementById("guess").innerHTML="Think Lower!";
        setTimeout(function(){document.getElementById("guess").innerHTML="Try Another One"},2000);
    }
    else{
        document.getElementById("guess").innerHTML="Think Higher!";
        setTimeout(function(){document.getElementById("guess").innerHTML="Try Another One"},2000);
    }
}