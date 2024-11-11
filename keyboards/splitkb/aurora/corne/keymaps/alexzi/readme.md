Got it! Here's the updated README with the correct file path for converting C to JSON:

---

## Keymap Conversion Reference

### Convert JSON to C

```sh
qmk json2c "C:\Users\galex\Downloads\splitkb_aurora_corne_rev1_alexzi_777.json" -o "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\json2c\file.c"
```

### Convert C to JSON

```sh
qmk c2json -kb splitkb/aurora/corne -km alexzi_777 "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\keymap.c" --no-cpp -o "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\json2c\file.json"
```

### Example Commands

**Convert JSON to C:**

```sh
qmk json2c "C:\Users\galex\Downloads\splitkb_aurora_corne_rev1_alexzi_777.json" -o "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\json2c\file.c"
```

**Convert C to JSON:**

```sh
qmk c2json -kb splitkb/aurora/corne -km alexzi_777 "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\keymap.c" --no-cpp -o "C:\Users\galex\qmk_firmware\keyboards\splitkb\aurora\corne\keymaps\alexzi2\json2c\file.json"
```

---

This README provides the correct paths for converting keymaps between JSON and C formats, making it easy to copy and paste the commands.