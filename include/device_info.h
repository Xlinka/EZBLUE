#ifndef DEVICE_INFO_H
#define DEVICE_INFO_H

#include <string>
#include <vector>
#include <windows.h>
#include <bluetoothapis.h>

struct BluetoothDevice {
    std::wstring name;
    std::wstring address;
};

std::wstring FormatBluetoothAddress(const BLUETOOTH_ADDRESS& address);
BluetoothDevice CreateBluetoothDevice(const BLUETOOTH_DEVICE_INFO& deviceInfo);

#endif 
