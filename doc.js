const myDiv = document.getElementById("myDiv");
myDiv.addEventListener("click",callbackfunction);
function callbackfunction(){
   myDiv.style.height = "150px";
   myDiv.style.width = "150px";
   myDiv.style.backgroundColor ="black";
}