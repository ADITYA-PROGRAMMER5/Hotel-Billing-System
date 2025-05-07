# 🏨 Hotel Billing System

## 📖 Description
This is a simple C-based **Hotel Billing System** designed to manage guest billing records. It allows you to add, view, update, and delete guest information, including room, food, and other expenses.

---

## ✨ Features
- 🆕 Add new guest records
- 📋 View all guests with a total billing summary
- ✏️ Update guest details by ID
- ❌ Delete guest records
- 📊 Automatic total expense calculation per guest

---

## 📁 Files
- `hotel_billing.c` - Main C source file

---

## ⚙️ How to Compile

```bash
gcc hotel_billing.c -o hotel_billing
```

---

## 🚀 How to Run
```bash
./hotel_billing
```

## 🧾 Sample Menu

1. Add Guest
2. View Guests
3. Update Guest
4. Delete Guest
5. Exit

---

##⚠️ Limitations

1. Maximum of 100 guest records (#define MAX_GUEST 100)

2. Data is stored in memory only (lost after program exit)

3. Uses scanf("%s", ...) which may cause buffer overflow for long names

---

## 💡 Suggestions for Improvement

1. Use fgets() for safer string input

2. Add file-based persistence (save/load records)

3. Implement search and sort features

4. Support dynamic memory allocation for scalability

---
