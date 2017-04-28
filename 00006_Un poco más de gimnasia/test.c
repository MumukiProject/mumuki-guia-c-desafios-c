int x = 0;

describe ("entrandoEnCalor") {
  it ("si x vale 4, ahora valdrá 5") {
    x = 4;
    
    ejecutar()
    
    should_int(x) be equal to(5);
  } end
  
  it ("si x vale 5, ahora valdrá 6") {
    x = 5;
    
    ejecutar()
    
    should_int(x) be equal to(6);
  } end
} end