# 🏝️ Bali Luxury Villa - Unreal Engine 5 Project

Полноценный C++ проект для Unreal Engine 5 с роскошной виллой на Бали и интерактивными Blueprint функциями!

## ✨ Возможности

### C++ Компоненты:
- **MainBuilding** - Основное здание виллы
- **InfinityPool** - Бесконечный бассейн с динамическим освещением
- **TerraceDeck** - Терраса с зоной отдыха

### Освещение:
- **PoolLight** - Динамическая подсветка бассейна (настраиваемый цвет)
- **SunsetLight** - Теплое освещение заката

### Интерактивные функции (Blueprint Callable):
- `TogglePoolLights()` - Включение/выключение подсветки
- `OpenDoors()` - Открытие/закрытие дверей

## 🚀 Быстрый старт

### 1. Клонирование
```bash
git clone https://github.com/truckboardcom/BaliLuxuryVilla-UE5.git
cd BaliLuxuryVilla-UE5
```

### 2. Создайте проект UE5
1. Откройте Epic Games Launcher → Unreal Engine 5.3+
2. **Games** → **Blank** → **C++** → **Desktop** → **Maximum Quality**
3. Project Name: **VillaProject**
4. Location: папка `BaliLuxuryVilla-UE5`

### 3. Скопируйте файлы
```
Source/LuxuryVilla.h → VillaProject/Source/VillaProject/
Source/LuxuryVilla.cpp → VillaProject/Source/VillaProject/
Source/VillaProject.Build.cs → VillaProject/Source/VillaProject/
```

### 4. Компиляция

**Visual Studio (Windows):**
```bash
JBght-click VillaProject.uproject → Generate VS project files
Open VillaProject.sln → Build Solution (Ctrl+Shift+B)
```

**Rider:**
```bash
Open VillaProject.uproject in Rider → Build All
```

### 5. Создайте Blueprint

1. Content Browser → Create **Blueprint Class** → Select **LuxuryVilla**
2. Name it: `BP_LuxuryVilla`
3. Настройте компоненты (добавьте meshes из Starter Content)
4. Перетащите на сцену и нажмите **Play** (Alt+P)!

## 🎮 Управление

Создайте контроллер с клавишами:
- **L** - Toggle pool lights
- **O** - Open/close doors

## 📦 Структура

```
BaliLuxuryVilla-UE5/
├── Source/
│   ├── LuxuryVilla.h          # C++ Header
│   ├── LuxuryVilla.cpp        # C++ Implementation
│   └── VillaProject.Build.cs  # Build Config
└── README.md
```

## 🔧 Требования

- Unreal Engine 5.3+
- Visual Studio 2022 / Xcode / Rider
- 16GB RAM
- GPU: GTX 1070 / RX 580+

## 📄 Лицензия

MIT License - свободно используйте!

---

**Создано для Unreal Engine разработчиков** 🎮