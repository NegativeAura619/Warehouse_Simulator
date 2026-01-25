# Warehouse Simulator

**Warehouse Simulator** is a long-term educational project focused on building a logical, system-level simulation of an automated warehouse in C++.

This is **not a game** and not a graphics project. The goal is to model real system behavior: states, processes, decisions, and interactions — the kind of logic that exists inside real warehouse control systems (WCS) and warehouse management systems (WMS).

The project starts as a **pure console-based simulation** and evolves step-by-step toward more complex systems.

---

## Core Philosophy

* Logic before visuals
* Systems before graphics
* Simulation before representation
* Architecture before aesthetics

The project focuses on **how a warehouse works**, not how it looks.

---

## Initial Scope (Prototype Phase)

The first version is intentionally minimal:

* Single robot
* Single order
* Text-based simulation
* No graphics
* No OpenGL
* No UI

### Core concepts:

* World model
* Robot entity
* Order entity
* State machine (FSM – Finite State Machine)
* Simulation loop

---

## Example Robot States

* IDLE
* MOVE_TO_PICKUP
* PICKUP
* MOVE_TO_DROPOFF
* DROPOFF

---

## Project Structure

```
warehouse-simulator/
├── src/    # C++ source code
├── data/   # Simulation data / configurations
├── log/    # Runtime logs (not versioned)
```

---

## Long-Term Goals

This project is designed to grow into a full simulation system:

* Multiple robots
* Multiple orders
* Task queues
* Path planning
* Resource conflicts
* Deadlocks
* Scheduling
* Optimization logic
* Event systems
* Eventually: visualization layer (OpenGL or other)

---

## Purpose

This project is built for learning and system thinking:

* Software architecture
* Simulation design
* State machines
* Event-driven systems
* System modeling
* Complex system behavior

It is meant to function as a **learning platform**, not just a coding project.

---

## Status

Early prototype phase.
Currently focused on:

* World modeling
* Core logic
* Simulation architecture
* System design

---

## License

To be defined.
