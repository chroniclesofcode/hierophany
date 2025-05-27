# nbody

Barnes-Hut simulation of the n-body problem.

From wikipedia:
The Barnes–Hut simulation (named after Josh Barnes and Piet Hut) is an approximation algorithm for performing an N-body simulation. It is notable for having order O(n log n) compared to a direct-sum algorithm which would be O(n^2).

The simulation volume is usually divided up into cubic cells via an octree (in a three-dimensional space), so that only particles from nearby cells need to be treated individually, and particles in distant cells can be treated as a single large particle centered at the cell's center of mass (or as a low-order multipole expansion). This can dramatically reduce the number of particle pair interactions that must be computed.

Some of the most demanding high-performance computing projects perform computational astrophysics using the Barnes–Hut treecode algorithm, such as DEGIMA.

TODO:
- Create Quadtree, can receive nodes
- Create the forces/do the calcs
- Run the simulation, visualise by connecting to Python
- Display images/GIF on github

- Accelerate simulation using GPU programming/SIMD?
- Create a 3D N-Body simulation?
- Make Quadtree more general using templates