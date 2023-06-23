document.getElementById("myButton").onclick = function(){
        let OTP = "";
        for (let i = 0; i<6; i++){
            OTP += Math.floor(Math.random() * 10);
        }
    document.getElementById("demo").innerHTML = OTP;
}


