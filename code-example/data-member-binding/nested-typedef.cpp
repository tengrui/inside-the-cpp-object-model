// typedef int length;

class Point3d
{
    typedef float length;
public:
    void mumble(length val) {
        _val = val;
    }
    length mumble() {
        return _val;
    }
private:
    // typedef float length;
    length _val;
};

int main()
{
    return 0;
}