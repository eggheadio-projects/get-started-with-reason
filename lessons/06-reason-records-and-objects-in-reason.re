type person = {
  name: string,
  age: int,
};
/* type person = {name: string, age: int, }; */

{
  name: "Anna",
  age: 28,
};
/* person = {name: "Anna", age: 28 } */

let tim = {
  name: "Tim",
  age: 52,
};

tim.name;
/* - : string = "Tim" */

tim.age;
/* - : int = 52 */

tim.size;
/* Error: This expression has type person. The field size does not belong to type person */

let {age: timsAge, name: timsName} = tim;
/*
 * let timsName: string = "Tim";
 * let timsAge: int = 52;
 */

 let {name: someName} = tim;
 /* let someName: string = "Tim"; */

 let {name} = tim;
 /* let name: string = "Tim"; */

let olderTim = {
  name: tim.name,
  age: tim.age + 1,
};
/* let olderTim: person = {name: "Tim", age: 53}; */

let evenOlderTim = {
  ...olderTim,
  age: olderTim.age + 1,
};
/* let olderTim: person = {name: "Tim", age: 54}; */

type animal = {
  species: string,
  mutable scary: bool,
};

let lion = {
  species: "Lion",
  scary: true,
};
/* let lion: animal = {species: "Lion", scary: true}; */

lion.scary = false;

type coordinates = {
  x: int,
  y: int,
};

type circle = {
  coordinates,
  radius: int,
};
/* type circle = { coordinates: coordinates, radius: int, }; */

{
  coordinates: {
    x: 3,
    y: 0,
  },
  radius: 4,
};
/* - : circle = {coordinates: {x: 3, y: 0}, radius: 4}; */

{foo: 42};
/* Error: Unbound record field foo */

let anna = {
  pub name = "Anna";
  pub eyeColor = "brown";
};

anna#eyeColor;
/* - : string = "brown" */