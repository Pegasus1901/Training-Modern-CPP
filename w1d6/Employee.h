

class Employee
{
private:
int _id;
public:
    Employee(int id):_id(id){};
    ~Employee();

    int id() const { return _id; }

    void setId(int id) { _id = id; }
};