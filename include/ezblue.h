#ifndef EZBLUE_H
#define EZBLUE_H

#include <string>
#include <vector>

#ifdef EZBLUE_EXPORTS
#define EZBLUE_API __declspec(dllexport)
#else
#define EZBLUE_API __declspec(dllimport)
#endif

struct BluetoothDevice {
    std::wstring name;
    std::wstring address;
};

extern "C" {
    EZBLUE_API std::vector<BluetoothDevice> GetPairedDevices();
    EZBLUE_API std::vector<BluetoothDevice> GetBLEDevices();
    EZBLUE_API void DiscoverDevices();
    EZBLUE_API bool PairDevice(const std::wstring& deviceAddress);
}

#endif 
