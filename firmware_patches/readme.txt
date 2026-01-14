These files can be overwritten in the original firmware.

In these files the partition of the esp32 will be set to the first one on startup of meshtastic/meshcore

These lines are added to achieve that:

auto bootPart = esp_partition_find_first(ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, NULL);
esp_ota_set_boot_partition(bootPart);
