async function fetchData() {
 const response = await fetch("https://jsonplaceholder.typicode.com/posts/1");
 const data = await response.json();
 console.log(data)
 const myDiv = document.getElementById("myDiv");
 myDiv.innerHTML = data.title;


}
 fetchData()