#include "physics.hh" 

MyPhysicsList :: MyPhysicsList()
{
    RegisterPhysics ( new G4EmStandardPhysics());
    RegisterPhysics ( new G4OpticalPhysics());  // works with optical <photons

} 

MyPhysicsList :: ~MyPhysicsList() 
{}

