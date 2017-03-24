#ifndef SALLY_H
#define SALLY_H

//Anything in your class is a "member" of that class
// Constant Variables need to be initialized using "Member Intitialization" method. Constant variables have a special syntax called "Member syntax".
//Whenever we have a constant Variable in our class, we cannot initialize it in the simple manner, we need to initialize it in a special way, through the use of Member Initializers.

class Sally
{
    public:
        Sally(int a, int b);
        void print();
    protected:

    private:
        int regVar; //regular Variable
        const int constVar; //constant Variable
};

#endif // SALLY_H
