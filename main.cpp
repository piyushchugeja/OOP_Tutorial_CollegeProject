#include <iostream>
#include <conio.h>
#include <string.h>
#include <algorithm>
#include <fstream>
using namespace std;
class IO
{
public:
        void showUnits()
        {
            cout<<"\nWhich unit would you like to learn?"<<endl;
            cout<<"Unit 1: Principles of OOP.\nBasic concepts such as tokens, keywords, variables, constants, data types, decision making statements, loops, arrays, strings, and structures in C++."<<endl;
            cout<<"\nUnit 2: Classes and objects.\nIntroducing classes and all other small concepts related to classes."<<endl;
            cout<<"\nUnit 3: Extending classes using inheritance.\nLearn inheritance and it's types and perform operations accordingly."<<endl;
            cout<<"\nUnit 4: Pointers and polymorphism.\nIntroducing polymorphism and various new aspects of pointers."<<endl;
            cout<<"\nUnit 5: File operations.\nLearn how to read and write data in external files using C++"<<endl;
        }
        void unit1Theory()
        {
                cout << "\nWelcome to Unit 1 theory tutorial!\nMenu:\n1. Input-Output\n2. Keywords\n3. Data types\n4. Operators\n5. Control structures\n6. Arrays, strings and structures\n7. Exit\n\n";
                int choose1;
                cout<<"What would you like to learn?";
                cin>>choose1;
                switch(choose1)
                {
                case 1:
                    cout << "\nAll the basic features of C language and C++ language are same, the only difference is the syntax. For instance. printf('Hello World!'); prints the same thing as cout << 'Hello World!';. In C++, cout (console out) and cin (console in) are the functions used for input and output. They are included in the header file 'iostream'.\n";
                    break;

                case 2:
                    cout << "\n\nKeywords: \nYou can't use keyword as identifier in your C++ programs, its reserved words in C++ library and used to perform an internal operation. Example: const, switch, int, void, class, template, delete, etc."<<endl;
                    break;

                case 3:
                    cout << "\n\nData types: \nWhen you declare any  variable, it has to have a  specific data type. Some of the basic data  types are as follows:\nint\tdouble\tchar\tfloat\nvoid\tlong int\tshort int\twchar_t" << endl;
                    cout << "Every variable is assigned a specific address in memory and it acquires some space. For instance, char  requires 1 byte, int requires 2 bytes or 4 bytes (depends on the compiler), float requires 4 bytes, double requires 8 bytes, and etc."<<endl;
                    break;

                case 4:
                    cout << "\n\nOperators: \nThere are 5 types of operators in C++.\n1. Arithmetic operators: Assume there are two variables A and B.\nA + B will  return the sum of those two.\nA - B will return the  difference between the two.\nA / B will  return quotient.\nA * B will return their product.\nA % B will return the remainder after the division.\n";
                    cout << "\n2. Relational operators: Assuming there are two variables X and Y.\nX == Y or X != Y will check if the two variables are equal or not and return true or false accordingly.\nA > B or  A < B will check if A is greater/smaller than B.\nA >= B or A <= B Checks if the value of left operand is greater than or equal to the value of right operand.\n";
                    cout << "\n3. Logical operators: There are three logical operators.\nAND (&&): Checks if both conditions are true and acts accordingly.\nOR (||): Checks if any one condition is true and acts accordingly.\nNOT (!): Used to reverse the logical state of its operand. If a condition is true, then NOT operator will make it false.\n";
                    cout << "4. Bitwise operators: Bitwise operators work on bits and perform bit-by-bit operations.\nBinary AND operator (&): Binary AND Operator copies a bit to the result if it exists in both operands.\nBinary OR operator (|): Binary OR operator copies a bit if it exists in either operand.\nBinary XOR operator (^): Binary XOR operator copies the bit if it is set in one operand but not both.\nBinary One's Compliment operator (~): Binary One's Compliment operator is unary and has the effect of 'flipping' bits.\n";
                    cout << "Binary LEFT SHIFT operator (<<): The left operands value is moved left by the number of bits specified by the right operand.\nBinary RIGHT SHIFT operator (>>): The left operands value is moved right by the number of bits specified by the right operand.\n";
                    cout << "5. Assignment operators: Assignment operators are used to assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. Examples: =,  +=, -=, /=, etc.\n";
                    break;

                case 5:
                    cout << "\n\nControl structures: \nDecision making structures require that the programmer specify one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false.\n\n1. if statement\nAn �if� statement consists of a boolean expression followed by one or more statements.\n\n2. if...else statement\nAn �if� statement can be followed by an optional �else� statement, which executes when the boolean expression is false.\n\n3.  switch statement\nA �switch� statement allows a variable to be tested for equality against a list of values.\n\nLikewise, there are nested ifs and nested switches too wherein you can use one decision making statement inside another.\n";
                    cout << "\nLoops:\n\n1. while loop\nRepeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.\n";
                    cout << "\n2. for loop\nExecute a sequence of statements multiple times and abbreviates the code that manages the loop variable.\n";
                    cout << "\n3. do...while loop\nLike a 'while' statement, except that it tests the condition at the end of the loop body.\n";
                    cout << "\n4. nested loops\nYou can use one or more loop inside any another �while�, �for� or �do..while� loop.\n";
                    break;

                case 6:
                    cout << "Arrays, strings and structures:\n";
                    cout << "\nArrays:\nC++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type. Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.\n";
                    cout << "\nStrings: \nThe C-style character string originated within the C language and continues to be supported within C++. This string is actually a one-dimensional array of characters which is terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.\n";
                    cout << "\n\nStructures: \nStructures are used to represent a new record. To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member for your program.\n";
                    break;

                case 7:
                    exit(choose1);
                    break;

                default:
                    cout << "\nPlease enter a valid choice next time."<<endl;
            }
            cout << "\n\nWould you like to view the program for this unit?(Y/N)\n";
                char p1;
                cin >> p1;
                if(p1=='y'||p1=='Y')
                    displayP1();
        }
        void unit2Theory()
        {

                cout << "\nWelcome to Unit 2 theory tutorial!\nMenu:\n1. Class and object\n2. Static data members\n3. Array of objects\n4. Concept of constructor and its types\n5. Constructor overloading\n6. Destructors\n7. Exit\n";
                int choose2;
                cout<<"What would you like to learn?";
                cin>>choose2;
                switch(choose2)
                {
                case 1:
                    cout << "\nClasses and objects:" << endl;
                    cout << "Class: \nA class is a user defined data type which binds data and its associated functions together. It allows the data and functions to be hidden, if necessary, from external use. Generally, a class specification has two parts." << endl;
                    cout << "1. Class declaration: It describes the type and scope of it's members.\n2. Class functions and definitions: It describes how the functions are implemented." << endl;
                    cout << "A class definition begins with the keyword class. The body of the class is contained within a set of braces, { }; (notice the semi-colon)." << endl;
                    cout << "Within the body, the keywords private: and public: specify the access level of the members of the class. The default is private. Usually, the data members of a class are declared in the private: section of the class and the member functions are in public: section." << endl;
                    cout << "\n\nObjects:\nDeclaring a variable of a class type creates an object. You can have many variables of the same type (class)." << endl;
                    cout << "Once an object of a certain class is created, a new memory location is created for it to store its data members and code. You can create many objects from a class type. E.g. Circle c; Circle *c;" << endl;
                    cout << "Private data of a class can be accessed by the member function. The following is the format for calling member function. Object-name.function-name(actual argument). E.g. x.getdata (10, 20.3);" << endl;
                    break;

                case 2:
                    cout << "\nStatic data members:" << endl;
                    cout << "A static member is shared by all objects of the class. \nAll static data is initialized to zero when the first object is created, if no other initialization is present. \nWe can�t put it in the class definition, but it can be initialized outside the class using the scope resolution operator '::' to identify which class it belongs to. \nWhen we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member." << endl;
                    cout << "\nStatic member functions:" << endl;
                    cout << "By declaring a member function as static, you make it independent of any object of the class. \nA static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator (::).\nA static member function can only access static data member, other static member functions and any other functions from outside the class.\nYou could use a static member function to determine whether some objects of the class have been created or not." << endl;
                    break;

                case 3:
                    cout << "\nArray of objects:" << endl;
                    cout << "Array of variables of type 'class' is known as 'Array of Objects'.\nTo create more than one object of a particular class the concept of array is combined with the definition of the class.\nSuch concept is called as 'Array of Object'." << endl;
                    cout << "\nObjects as function arguments:" << endl;
                    cout << "An object may be used as function arguments in two ways: \n1. Pass by values: A copy of entire object is passed to the function .\n2. Pass � by �reference : Only the address of the object is passed to the function." << endl;
                    cout << "\nLet's also learn about friend functions." << endl;
                    cout << "A non-member function cannot have access to the private data of a class. \nSo the function is declared with friend keyword. \nC++ friend functions are special functions which can access the private members of a class. \nThey are a loophole in the Object-Oriented Programming concepts, but logical use of them can make them useful in certain cases. \nA class can also be declared to be the friend of some other class. \nWhen we create a friend class then all the member functions of the friend class also become the friend of the other class." << endl;
                    cout << "Friend functions have following properties:\n1) Friend of the class can be member of some other class.\n2) Friend of one class can be friend of another class or all the classes in one program, such a friend is known as GLOBAL FRIEND. \n3) Friend can access the private or protected members of the class in which they are declared to be friend, but they can use the members for a specific object. \n4) Friends are non-members hence do not get �this� pointer.\n5) Friends, can be friend of more than one class, hence they can be used for message passing between the classes. \n6) Friend can be declared anywhere (in public, protected or private section) in the class." << endl;
                    break;

                case 4:
                    cout << "\nConstructor and its types:" << endl;
                    cout << "Constructor is a class member function with same name as its class name.\nA constructor is a special member function whose task is to initialize the data members of an objects of its class. \nThe constructor is invoked whenever an object of its associated class is created.\nThe main job of constructor is to allocate memory for class objects.\nThere is no need to write any statement to invoke the constructor function.\nIf a normal member function is defined for initialization, we need to invoke that function for each and every objects separately.\nWe need constructors because we can't initialize class members directly while declaring them." << endl;
                    cout << "\nTypes of constructors: " << endl;
                    cout << "#1 Default constructor\nA constructor that accepts no parameters is called the default constructor." << endl;
                    cout << "\n#2 Parameterized constructor\nA constructor that receives arguments/parameters is called parameterized constructor." << endl;
                    cout << "\n#3 Constructor with default arguments\nIt is possible to define a constructor with default arguments. We can assign default values for one or more parameters at the time of function declaration, which is used when those corresponding parameters are omitted in the call to the constructor." << endl;
                    cout << "\n#4 Copy constructor\nCopy Constructor is a type of constructor which is used to create a copy of an already existing object of a class type. It is usually of the form X (X&), where X is the class name." << endl;
                    break;

                case 5:
                    cout << "\nMultiple constructors (constructor overloading):" << endl;
                    cout << "We can declare number of different constructor in a single program.\nWhen more than one constructor function is declared and defined in a class, then the constructors are overloaded.\nConstructor overloading is same as function overloading because constructor is a special functions." << endl;
                    break;

                case 6:
                    cout << "\nDestructors:" << endl;
                    cout << "Destructor is used to destroy the object that have been created by a constructor.\nLike a constructor, It�s a special member function having the same name that of the class.\nBut It is preceded by tilde (~) sign.\nLike constructors, destructors do not have return data type and does not take any argument.\nThis member function is in public section only.\nA destructor will be invoked implicitly by clean up storage that is no longer accessible.\nIt can�t be declared static, const or volatile.\nDefinition of destructor does not have any meaningful contents.\nFor example, the destructor for the class integer can be defined as shown below:\n~ integer( )" << endl;
                    break;

                case 7:
                    exit(choose2);
                    break;

                default:
                    cout << "\nEnter valid option next time." << endl;
                }
            cout << "\n\nWould you like to view the program for this unit?(Y/N)\n";
                    char p2;
                    cin >> p2;
                    if(p2=='y'||p2=='Y')
                        displayP2();
        }
        void unit3Theory()
        {
            int choose3;
                cout << "\nWelcome to Unit 3 theory tutorial!\nMenu:\n1. Inheritance\n2. Types of inheritance\n3. Virtual base class, abstract class, and constructors in derived class\n4. Exit\n";
                cout<<"What would you like to learn?";
                cin>>choose3;
                switch(choose3)
                {
                case 1:
                    cout << "\nInheritance:" << endl;
                    cout << "C++ supports the concept of re-usability once a class has been written and tested." << endl;
                    cout << "Inheritance is the capability of one class to acquire properties and characteristics from another class.\nThe class whose properties are inherited by other class is called the Parent or Base or Super class.\nThe class which inherits properties of other class is called Child or Derived or Sub class.\nInheritance makes the code reusable.\nWhen we inherit an existing class, all its methods and fields become available in the new class, hence code is reused." << endl;
                    cout << "\nBase class:- A base class can be defined as a normal C++ class, which may consist of some data and functions." << endl;
                    cout << "\nDerived class:- i) A class which acquires properties from base class is called derived class." << endl;
                    cout << "\t\t\t ii) A derived class can be defined by class in addition to its own detail." << endl;
                    cout << "In order to derive a class from another, we use a colon (:) in the declaration of the derived class using the following format:- class derived-class-name: access-specifier base-class-name" << endl;
                    cout << "\nVisibility modes:" << endl;
                    cout << "PRIVATE mode:\nWhen a base class is privately inherited by a derived class, public members of the base class becomes private members of the derived class and therefore the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class." <<endl;
                    cout << "\nPROTECTED mode:\nIf we want to inherit private data by a class, the only option is to change the visibility limit from private to public, but this will eliminate the advantage of data hiding.\nTherefore to achieve data hiding, C++ provides a third visibility modifier, protected which has limited purpose in inheritance.\nDeclaring methods and data of the base class as protected (instead of private) allows derived classes to access them.\nA member declared protected is accessible by the member functions within its class and any class immediately derived from it." << endl;
                    cout << "\nPUBLIC mode: \nWhen the visibility-mode is public the base class is publicly inherited.\nIn public inheritance, the public members of the base class become public members of the derived class and therefore they are accessible to the objects of the derived class." << endl;
                    break;

                case 2:
                    cout << "\nTypes of inheritance:" << endl;
                    cout << "\nSingle inheritance:\nA derived class with only one base class, is called Single Inheritance." << endl;
                    cout << "\nMultiple inheritance:\nA derived class with several base classes, is called multiple inheritance." << endl;
                    cout << "\nHierarchical inheritance:\nThe properties of one class may be inherited by more than one class, that is called hierarchical inheritance." << endl;
                    cout << "\nMultilevel inheritance:\nThe mechanism of deriving a class from another derived class is known as multilevel inheritance." << endl;
                    cout << "\nHybrid inheritance:\nThe hybrid Inheritance is a combination of all types of inheritance." << endl;

                    break;

                case 3:
                    cout << "\nVirtual base class:" << endl;
                    cout << "Virtual base classes are used in virtual inheritance in a way of preventing multiple �instances� of a given class appearing in an inheritance hierarchy when using multiple inheritances." << endl;
                    cout << "\nPure virtual function:" << endl;
                    cout << "Pure virtual function is virtual function which has no definition in base class.\nThey start with keyword virtual and end with =0\nDerived class override the pure virtual function." << endl;
                    cout << "\nAbstract classes:" << endl;
                    cout << "Abstract class is a class which has at least one pure virtual function.\nThe object of Abstract class can not be created.\nThe main objective is to provide some characteristics to the derived classes and to create base pointer to achieve run time polymorphism." << endl;
                    cout << "\nConstructors in derived class:" << endl;
                    cout << "If base class constructor does not have any arguments, the derived class need not have a constructor function.\nIf base class contain one or more argument, then it is mandatory for the derived class to have a constructor and pass the argument to the base class constructor.\nIn inheritance we create object of only derived class, so it make sense of derived class to pass argument to the base class constructor.\nBoth base and derived class can have constructors and destructors." << endl;

                    break;

                case 4:
                    exit(choose3);
                    break;

                default:
                    cout << "Wrong input, try again later." << endl;
                }
             cout << "\n\nWould you like to view the program for this unit?(Y/N)\n";
                    char p3;
                    cin >> p3;
                    if(p3=='y'||p3=='Y')
                        displayP3();
                    else
                        exit(choose3);
        }
        void unit4Theory()
        {
                cout << "\nWelcome to Unit 4 theory tutorial!\nMenu:\n1. Pointers\n2. Pointer to object\n3. Introduction to polymorphism\n4. Compile time polymorphism\n5. Run time polymorphism \n6. Exit\n";
                int choose4;
                cout<<"What would you like to learn?";
                cin>>choose4;
                switch(choose4)
                {
                case 1:
                    cout << "\n\nConcept of pointers:\nPointers are symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. It�s general declaration in C/C++ has the format:\ndata_type *var_name\n" << endl;
                    break;

                case 2:
                    cout << "\n\nPointer to object:\nA variable that holds an address value is called a pointer variable or simply a pointer. A pointer can point to objects as well as to simple data types and arrays. When we write a program, we don't know the exact number of how many objects we want to create. When this is the case we can use 'new' keyword to create objects while the program is running. New returns a pointer to an unnamed object." << endl;
                    break;

                case 3:
                    cout << "\n\nWhat is polymorphism?\nPolymorphism means 'many forms', and it occurs when we have many classes that are related to each other by inheritance. \nLike we specified in the previous unit; Inheritance lets us inherit attributes and methods from another class. \nPolymorphism uses those methods to perform different tasks. \nThis allows us to perform a single action in different ways. \nFor example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.)" << endl;
                    break;

                case 4:
                    cout << "\n\nCompile time polymorphism:\n" << endl;
                    cout << "This type of polymorphism is achieved by function overloading or operator overloading." << endl;
                    cout << "\nFunction overloading:\nWhen there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments." << endl;
                    cout << "\nOperator overloading:\nC++ also provide option to overload operators. For example, we can make the operator (�+�) for string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. So a single operator �+� when placed between integer operands , adds them and when placed between string operands, concatenates them." << endl;
                    break;

                case 5:
                    cout << "\n\nRuntime polymorphism:\n" << endl;
                    cout << "This type of polymorphism is achieved by Function Overriding." << endl;
                    cout << "\nFunction overriding:\nFunction overriding on the other hand occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden." << endl;
                    break;

                case 6:
                    exit(choose4);
                    break;

                default:
                    cout << "\nEnter valid option, try again." << endl;
                }
            cout << "\n\nWould you like to view the program for this unit?(Y/N)\n";
                char p4;
                cin >> p4;
                if(p4=='y'||p4=='Y')
                    displayP4();
        }
        void unit5Theory()
        {
                cout << "\nWelcome to Unit 5 theory tutorial!\nMenu:\n1. C++ stream classes\n2. Opening & closing files and reading & writing from files\n3. Detection of end of file, file modes\n4. Exit\n";
                int choose5;
                cout<<"What would you like to learn?";
                cin>>choose5;
                switch(choose5)
                {
                case 1:
                    cout << "\n\nC++ stream classes and files:" << endl;
                    cout << "In C++ there are number of stream classes for defining various streams related with files and for doing input-output operations. All these classes are defined in the file 'iostream.h'." << endl;
                    cout << "\nios class is topmost class in the stream classes hierarchy. It is the base class for istream, ostream, and streambuf class.\nistream and ostream serves the base classes for iostream class. The class istream is used for input and ostream for the output.\nClass ios is indirectly inherited to iostream class using istream and ostream. To avoid the duplicity of data and member functions of ios class, it is declared as virtual base class when inheriting in istream and ostream.\nThe _withassign classes are provided with extra functionality for the assignment operations that�s why _withassign classes." << endl;
                    cout << "\n\nHere are the facilities provided by the stream classes: " << endl;
                    cout << "1. The ios class:\nThe ios class is responsible for providing all input and output facilities to all other stream classes." << endl;
                    cout << "\n2. The istream class:\nThis class is responsible for handling input stream. It provides number of function for handling chars, strings and objects such as get, getline, read, ignore, putback etc.." << endl;
                    cout << "\n3. The ostream class:\nThis class is responsible for handling output stream. It provides number of function for handling chars, strings and objects such as write, put etc.." << endl;
                    cout << "\n4. The iostream:\nThis class is responsible for handling both input and output stream as both istream class and ostream class is inherited into it. It provides function of both istream class and ostream class for handling chars, strings and objects such as get, getline, read, ignore, putback, put, write etc.." << endl;
                    cout << "\n5. istream_withassign class:\nThis class is variant of istream that allows object assigment. The predefined object cin is an object of this class and thus may be reassigned at run time to a different istream object." << endl;
                    cout << "\n6. ostream_withassign class:\nThis class is variant of ostream that allows object assigment. The predefined objects cout, cerr, clog are objects of this class and thus may be reassigned at run time to a different ostream object." << endl;
                    break;

                case 2:
                    cout << "\n\nOpening files:" << endl;
                    cout << "The first operation generally performed on an object of one of these classes to use a file is the procedure known as to opening a file. An open file is represented within a program by a stream and any input or output task performed on this stream will be applied to the physical file associated with it. The syntax of opening a file in C++ is:\nopen (filename, mode);" << endl;
                    cout << "\nClosing files:" << endl;
                    cout << "When any C++ program terminates, it automatically flushes out all the streams releases all the allocated memory and closes all the opened files. But it is good to use the close() function to close the file related streams and it is a member of ifsream, ofstream and fstream objects.\nSyntax: void close();" << endl;
                    cout << "\nWriting and reading from files:" << endl;
                    cout << "While doing C++ program, programmers write information to a file from the program using the stream insertion operator (<<) and reads information using the stream extraction operator (>>). The only difference is that for files programmers need to use an ofstream or fstream object instead of the cout object and ifstream or fstream object instead of the cin object." << endl;
                    break;

                case 3:
                    cout << "\n\nDetection of end of file:" << endl;
                    cout << "You can detect when the end of the file is reached by using the member function eof() which has prototype :\nint eof();\nIt returns non-zero when the end of file has been reached, otherwise it returns zero." << endl;
                    cout << "\nFile modes:" << endl;
                    cout << "in *: File open for reading: the internal stream buffer supports input operations." << endl;
                    cout << "\nout: File open for writing: the internal stream buffer supports output operations." << endl;
                    cout << "\nbinary: Operations are performed in binary mode rather than text." << endl;
                    cout << "\nate: The output position starts at the end of the file." << endl;
                    cout << "\napp: All output operations happen at the end of the file, appending to its existing contents." << endl;
                    cout << "\ntrunc: Any contents that existed in the file before it is open are discarded." << endl;
                    break;

                case 4:
                    exit(choose5);
                    break;

                default:
                    cout << "\nInvalid input, try again." << endl;
                }
            cout << "\n\nWould you like to view the program for this unit?(Y/N)\n";
                char p5;
                cin >> p5;
                if(p5=='y'||p5=='Y')
                    displayP5();
        }
        void displayP1()
        {
            fstream pr1;
            char line[200];
            pr1.open("unit1Program.txt");

            if(!pr1)
            {
                cout << "\nSomething went wrong in opening file!\nTry again.";
                exit(1);
            }
            while(!pr1.eof())
            {
                pr1.getline(line, 200);
                cout << line << endl;
            }
            pr1.close();
        }
        void displayP2()
        {
            /*cout << "\nExample for unit 2:\nQuestion: WAPT to find out the smaller number between two classes using friend function." << endl;
            cout << "\n#include<iostream>\n#include<conio.h>\nusing namespace std;\nclass two;\nclass one\n{\n\tint x;\npublic:\n\tfriend void min(one, two);\n} o;\nclass two\n{\n\tint y;\npublic:\n\tfriend void min(one,two);\n}t;\nvoid min(one x, two y)\n{\n\tx.x= 10;\n\ty.y = 20;\n\tif(x.x < y.y)\n\t\tcout<<'Smaller number:'<<x.x<<endl;\n\telse\n\t\tcout<<'Smaller number:'<<y.y<<endl;\n}\nint main()\n{\n\tclrscr();\n\tmin(o, t);\n\tgetch();\n\treturn 0;\n}" << endl;
            cout << "\nOutput:\nSmaller number: 10" << endl;*/
            fstream pr2;
            char line[200];
            pr2.open("unit2Program.txt");

            if(!pr2)
            {
                cout << "\nSomething went wrong in opening file!\nTry again.";
                exit(1);
            }
            while(!pr2.eof())
            {
                pr2.getline(line, 200);
                cout << line << endl;
            }
            pr2.close();
        }
        void displayP3()
        {
            /*cout << "\nExample for unit 3:\nQuestion: WAP that demonstrates inheritance and use of constructor in derived class." << endl;
            cout << "\n#include<iostream>\nusing namespace std;\nclass Base\n{ \n\tint x;\npublic:\n\tBase() \n\t{ \n\t\tcout << 'Base default constructor'; \n\t}\n};\nclass Derived : public Base\n{ \n\tint y;\npublic:\n\tDerived() \n{ \n\t\tcout << 'Derived default constructor'; \n\t}\n\tDerived(int i) \n\t{ \n\t\tcout << 'Derived parameterized constructor'; \n\t}\n};\nint main() \n{ \n\tBase b; \n\tDerived d1; \n\tDerived d2(10); \nreturn 0;\n}" << endl;
            cout << "\nOutput:\nBase default constructor\nBase default constructor\nDerived default constructor\nBase default constructor\nDerived parameterized constructor" << endl;*/
            fstream pr3;
            char line[200];
            pr3.open("unit3Program.txt");

            if(!pr3)
            {
                cout << "\nSomething went wrong in opening file!\nTry again.";
                exit(1);
            }
            while(!pr3.eof())
            {
                pr3.getline(line, 200);
                cout << line << endl;
            }
            pr3.close();
        }
        void displayP4()
        {
            /*cout << "\nExample for unit 4:\nQuestion: WAPT demonstrate compile time polymorphism using operator overloading." <<  endl;
            cout << "\n#include<iostream> \nusing namespace std; \nclass Complex \n{  \n\tint real, imag; \npublic: \n\tComplex(int r = 0, int i =0)  \n\t{\n\t\treal = r;   \n\t\timag = i;\n\t} \n\tComplex operator + (Complex const &obj) \n\t{ \n\t\tComplex res; \n\t\tres.real = real + obj.real; \n\t\tres.imag = imag + obj.imag; \n\t\treturn res; \n\t} \n\tvoid print() \n\t{ \n\t\tcout << real << ' + i' << imag << endl; \n\t} \n}; \nint main() \n{ \n\tComplex c1(10, 5), c2(2, 4); \n\tComplex c3 = c1 + c2;  \n\tc3.print(); \n} " <<  endl;
            cout << "\nOutput:\n12 + i9" << endl;*/
            fstream pr4;
            char line[200];
            pr4.open("unit4Program.txt");

            if(!pr4)
            {
                cout << "\nSomething went wrong in opening file!\nTry again.";
                exit(1);
            }
            while(!pr4.eof())
            {
                pr4.getline(line, 200);
                cout << line << endl;
            }
            pr4.close();
        }
        void displayP5()
        {
            /*cout << "\nExample for unit 5:\nQuestion: WAPT demonstrate file handling in C++ using ifstream & ofstream class object." << endl;
            cout << "\n#include <iostream> \n#include <fstream> \nusing namespace std; \nint main() \n{ \n\tofstream fout; \n\tstring line; \n\tfout.open('sample.txt'); \n\twhile (fout) { \n\t\tgetline(cin, line); \n\t\tif (line == '-1') \n\t\t\tbreak; \n\t\tfout << line << endl; \n\t} \n\tfout.close(); \n\tifstream fin; \n\tfin.open('sample.txt'); \n\twhile (fin) { \n\t\tgetline(fin, line); \n\t\tcout << line << endl; \n\t} \n\tfin.close(); \n\treturn 0; \n}" << endl;
            cout << "\nInput: \nHi, this is a micro-project.\n-1\n\nOutput:\nHi, this is a micro-project." << endl;*/
            fstream pr5;
            char line[200];
            pr5.open("unit5Program.txt");

            if(!pr5)
            {
                cout << "\nSomething went wrong in opening file!\nTry again.";
                exit(1);
            }
            while(!pr5.eof())
            {
                pr5.getline(line, 200);
                cout << line << endl;
            }
            pr5.close();
        }
        void displayGroupDeets()
        {
            cout << "\tTutorial made by group 10 of CO3iB\n";
            cout << "\tGroup details:\n";
            cout << "\t-------------------------\n";
            cout << "\t|S.No.|   Name   | R.No.|";
            cout << "\n\t-------------------------\n";
            cout << "\t|  1  |  Piyush  |  38  |\n";
            //cout << "\t|\t\t\t|\n";
            cout << "\t-------------------------\n";
            cout << "\t|  2  |   Vinit  |  39  |\n";
            //cout << "\t|\t\t\t|\n";
            cout << "\t-------------------------\n";
            cout << "\t|  3  |  Vedant  |  40  |\n";
            //cout << "\t|\t\t\t|\n";
            cout << "\t-------------------------\n";
            cout << "\t|  4  | Siddhant |  41  |\n";
            //cout << "\t|\t\t\t|\n";
            cout << "\t-------------------------\n";
        }
};
class programs:public IO
{
    int ch;
public:
    void displayUnitNo()
    {
        cout << "\nHere you can view a program and its output. A single program will cover all the topics in the unit and give you a better understanding. Choose the unit number and the program shall be displayed accordingly.\n" << endl;
        showUnits();
    }
    void displayPrograms()
    {
        cout<<"\nEnter the number of unit: ";
        int chooseProgram;
        cin >> chooseProgram;
        system ("CLS");
        switch (chooseProgram)
        {
        case 1:
            displayP1();
            break;

        case 2:
            displayP2();
            break;

        case 3:
            displayP3();
            break;

        case 4:
           displayP4();
           break;

        case 5:
           displayP5();
           break;

        default:
            cout << "\nTry again later. Error while displaying programs." << endl;
        }
    }
};
class theory:public IO
{
    int choice;
public:
    void acceptUnitNo()
    {
        showUnits();
        cout<<"\nEnter the number of unit of which you want to learn the theory part: ";
        cin>>choice;
    }
    void teachTheory()
    {

        if(choice==1)
        {
            unit1Theory();
        }
        else if (choice==2)
        {
            unit2Theory();
        }
        else if (choice==3)
        {
            unit3Theory();
        }
        else if (choice==4)
        {
            unit4Theory();
        }
        else if (choice==5)
        {
            unit5Theory();
        }
        else
            cout << "\nInvalid input. Try again." << endl;
    }
};
char changeCase(char a)
{
    return tolower(a);
}
int main()
{
    system("color 4f");
    cout<<"*******************************************************************"<<endl;
    cout<<"Welcome to tutorial for Object Oriented Programming (OOP) using C++"<<endl;
    cout<<"*******************************************************************"<<endl;
    IO d;
    d.displayGroupDeets();
    system("PAUSE");
    system("CLS");
    tutorial:
    system("CLS");
    cout<<"Learn theory or programs in this application, just type!"<<endl;
    cout<<"\nWhat would you like to learn?\n";
    string choice;
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), changeCase);

    system("CLS");
    if(choice=="theory")
    {
        system ("color 70");
        theory t;
        t.acceptUnitNo();
        system ("CLS");
        t.teachTheory();
    }

    else if(choice=="programs")
    {
        system ("color fd");
        programs p;
        p.displayUnitNo();
        p.displayPrograms();
    }

    else if(choice=="exit" || choice=="quit")
    {
        cout << "\nThank you, bye";
        exit(1);
    }

    else
        cout<<"Okay, process over. Give proper inputs."<<endl;

    cout << "\nWould you like to run the tutorial application again?(Y/N)";
    char input;
    cin >> input;

    endOfProgram:
    if(input=='y' || input=='Y')
        goto tutorial;

    else
        cout << "\nThank you for using our tutorial." << endl;
    return 0;
}
