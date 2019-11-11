﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.0.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Tuesday, August 20, 2019
 ***********************************************************************************************/

#ifndef DEVICEINFO_INTERFACE_H
#define DEVICEINFO_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../esp32AzureKit_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum DEVICEINFO_READONLY_PROPERTY_TAG
{
    Deviceinfo_MANUFACTURER_PROPERTY,
    Deviceinfo_MODEL_PROPERTY,
    Deviceinfo_SWVERSION_PROPERTY,
    Deviceinfo_OSNAME_PROPERTY,
    Deviceinfo_PROCESSORARCHITECTURE_PROPERTY,
    Deviceinfo_PROCESSORMANUFACTURER_PROPERTY,
    Deviceinfo_TOTALSTORAGE_PROPERTY,
    Deviceinfo_TOTALMEMORY_PROPERTY
} DEVICEINFO_PROPERTY;

// DigitalTwin interface name from service perspective.

static const char DeviceinfoInterfaceId[] = "urn:azureiot:DeviceManagement:DeviceInformation:1";

static const char DeviceinfoInterfaceInstanceName[] = "urn_azureiot_DeviceManagement_DeviceInformation";
// Telemetry names for this interface.

// Property names for this interface.

#define DeviceinfoInterface_ManufacturerProperty "manufacturer"

#define DeviceinfoInterface_ModelProperty "model"

#define DeviceinfoInterface_SwVersionProperty "swVersion"

#define DeviceinfoInterface_OsNameProperty "osName"

#define DeviceinfoInterface_ProcessorArchitectureProperty "processorArchitecture"

#define DeviceinfoInterface_ProcessorManufacturerProperty "processorManufacturer"

#define DeviceinfoInterface_TotalStorageProperty "totalStorage"

#define DeviceinfoInterface_TotalMemoryProperty "totalMemory"

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE DeviceinfoInterface_Create();

void DeviceinfoInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportAll();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportManufacturer();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportModel();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportSwVersion();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportOsName();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportProcessorArchitecture();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportProcessorManufacturer();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportTotalStorage();

DIGITALTWIN_CLIENT_RESULT DeviceinfoInterface_Property_ReportTotalMemory();

#ifdef __cplusplus
}
#endif

#endif  // DEVICEINFO_INTERFACE_H
