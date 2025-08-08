var profile = {
    "name": "aubaid",
    "age": 20,
    "display": ()=> {
        console.log("hello 1");
        console.log("hello 2");
        console.log(this.age);
        
    },
    "status": "mingle",
    "address": {
        "state": "J&K",
        "dist": "Budgam",
        "pincide": 192121,
        "village": "chinar bagh pahroo"
    }
}

profile.display();

 var a=90;

function aubaid(){
    console.log("hello");
    console.log(this.profile);
    
}
// console.log(window);
aubaid();