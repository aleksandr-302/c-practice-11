class Cow: public Farm_Animal
{
public:
    Cow(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){

    };
    Cow& get_action(string object)
    {
        cout << name <<' '<< feature<< ' '<< object << endl;
    }
};
class Pig: public Farm_Animal
{
public:
    Pig(string name,string feature,string sound,string resource): Farm_Animal(name,feature,sound, resource){

    };
    Pig& get_action(string object)
    {
        cout << name<< ' '<< feature<< ' '<< object << endl;
    }
};
class Goat: public Farm_Animal
{
public:
    Goat(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){

    };
    Goat& get_action(string object)
    {
        cout << name << ' ' << feature<< ' ' << object << endl;
    }
};
class Sheep: public Farm_Animal
{
public:
    Sheep(string name,string feature,string sound, string resource): Farm_Animal(name,feature,sound, resource){

    };
    Sheep& get_action(string object)
    {
        cout << name << ' ' << feature<< ' '<< object << endl;
    }
};