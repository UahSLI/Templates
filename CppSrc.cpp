/*
//@File: CppSrc.hpp
//@Desc: Implementation of CppHeader.hpp, implement this class' methods only
//@FSW: False (Denotes if the file is running on the rocket or payload during the mission)
*/

#include <CppHeader.hpp>

//Brief description of the function being implemented. 
//@in: none
//@out: int 
//@req: requirements satisfied by function
int SubTeam::Subsystem::Unit::getData(){
    return data;

}

//Constructor for Unit 
//@in: none
//@out: Reference to created Unit 
//@req: none
SubTeam::Subsystem::Unit::Unit(){
    myData = 5;
}