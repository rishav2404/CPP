#include <bits/stdc++.h>
using namespace std;

class Device_t{
        int type;
        char* material;
        char* name;
        float opvoltage;
        int pincount;

        public:

        void set_type(int _type){
            type=_type;
        }

        int get_type(){
            return type;
        }

        void set_pincount(int _pincount){
            pincount=_pincount;
        }
        int get_pincount(){
            return pincount;
        }
    };


int main()
{
    

    Device_t  *p_device,a_device;

    a_device.set_type(1);
    a_device.set_pincount(12);
    cout<<endl;
    cout<<a_device.get_pincount()<<endl;
    cout<<a_device.get_type()<<endl;
    

    p_device=(Device_t*)calloc(1,sizeof(Device_t));

    p_device->set_type(5);
    cout<<endl;
    cout<<(*p_device).get_type()<<endl;

    cout<<"----------------"<<endl;

    cout<<sizeof(a_device)<<endl;
    cout<<sizeof(Device_t)<<endl;
    cout<<sizeof(p_device)<<endl;
    cout<<sizeof(*p_device)<<endl;

    cout<<&a_device<<endl;
    
    cout<<&p_device<<endl;
    cout<<&*p_device<<endl;
    return 0;
}