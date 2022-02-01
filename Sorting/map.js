let mapToObject = map => {
    let myObj = {};
    map.forEach((value, key)=>{
        myObj[key] = value;
    });
    return myObj;
}

arr = ["user", "name", "password"];
let map = new Map();
map.set(arr[0], "All");
map.set(arr[1], "Peter");
map.set(arr[2], "123");

let sampleObj = mapToObject(map);

console.log(sampleObj);
