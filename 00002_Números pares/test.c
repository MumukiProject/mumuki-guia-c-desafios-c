describe ("primerPar") {
  it ("encuentra el primer número par de un arreglo con 6 elementos") {
    should_int(primerPar({21, 3, 4, 5, 8, 20})) be equal to(4);
  } end
  
  it ("encuentra el primer número par de un arreglo con 3 elementos") {
    should_int(primerPar({5, 8, 20})) be equal to(4);
  } end
} end