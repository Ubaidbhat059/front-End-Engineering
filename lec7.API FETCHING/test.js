function domanipulation(data) {
    // data is Object
    const para = document.getElementsByTagName("p");
    para[0].innerHTML = data[0].userId;
    para[1].innerHTML = data[0].Id;
    para[2].innerHTML = data[0].title;
    para[3].innerHTML = data[0].completed;

}
async function getdata() {
    let responce = await fetch("https://jsonplaceholder.typicode.com/todoS");
    let data = await responce.json();
    console.log(data);
    domanipulation(data);


}
getdata();



