module Math = {};

module Math = {
  let pi = 3.14159;
  let add = (x, y) => x + y;
};

Math.pi;
/* - : float = 3.14159 */

Math.add(2, 3);
/* - :int = 5 */

module School = {
  type profession = 
    | Teacher
    | Director;
};

School.Teacher;
/* - : School.profession = School.Teacher */

let personOne = School.Teacher;
/* let personOne: School.profession = School.Teacher */
