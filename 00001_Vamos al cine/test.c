describe ("precioEntrada") {
  it ("los ninios no pagan") {
    should_int(precioEntrada(2, 0)) be equal to(0);
  } end
} end