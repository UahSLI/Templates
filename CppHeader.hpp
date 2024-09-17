/*
//@File: CppHeader.hpp
//@Desc: A simple template file to base c++ headers off of
//@Req: Requirements being satisfied by the software
//@FSW: False (Denotes if the file is running on the rocket or payload during the mission)
*/
#pragma once

//Include_headers


namespace SubTeam{//Curly brackets open on same line, close on new line
    namespace Subsystem{//Namespaces begin with capital letter
        class Unit{ //Classes begin with uppercase letter
            private://private always first
            int data = 5; //separate = with spaces          
            int myData;//camel case functions and variable names

            int getData();//functions declared but not implemented
            //Newline between access levels

            public:
            Unit(int Data): myData(Data) {}; //default constructors can be defined in header, any other constructor activity can't
            Unit();
            ~Unit() = default; //Default constructor
        };
    }//Subsystem -> namespace closing bracket given comment with name of namespace
}//SubTeam


//Enums can be declared in headers
//Enums are named by all capital names
enum MY_ENUM{
    FIRST = 1,
    SECOND = 2
};

//Structs can be declared in headers
//Structs are declared by first letter capital
struct MyStruct{
    double someData;
};

//Functions can be declared in headers
void doStuff(int num);

//constants can be defined in headers
static constexpr const int myConstant = 7;

//use @TODO for any todos