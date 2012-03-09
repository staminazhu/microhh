#include "grid.h"
#include "fields.h"

int main()
{
  // INIT
  // initialize the MPI interface
  // create the objects, read the inputdata
  cgrid grid;
  cfields fields(&grid);

  // initialize the objects, allocate the required memory
  grid.initgrid();
  fields.initfields();

  // create the objects, fill the fields with data
  grid.creategrid();
  fields.createfields();
  // END INIT

  // DNS
  // create the model
  
  // start the time loop
  // 1. boundary conditions
  // 2. advection
  // 3. diffusion
  // 4. gravity
  // 5. large scale forcings
  // 6. pressure

  // END DNS
  
  return 0;
}

