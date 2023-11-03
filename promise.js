const myResponsePromise = fetch("https://jsonplaceholder.typicode.com/posts/1")
myResponsePromise.then(hello);

function hello(res){
   const myDataPromise = res.json();
   myDataPromise.then(myDataCallback);

}

function myDataCallback(data){
    console.log(data);
}
