# Problem solving by searching:

**Definitions:**

- **problem solving agent** is an agent that decides what to do by finding sequences of actions that lead to desirable states. and that process is called **Search**.
- **Informed algorithms** is the a;gorithms when the agent can estimate how far a state is from a goal state.
- **Uninformed algorithms** is the algorithms when the agent can't estimate how far a state is from a goal state.

# Problem solving agents:

we will assume our agents always have access to information about the world, such as the map, with that the agents will follow this four steps:

1. **Goal formulation**: the agent adopts the goal of solving a particular problem.
2. **Problem formulation**: the agent formulates a problem to solve.
3. **Search**: the agent searches for a sequence of actions that will lead to the solution.
4. **Execution**: the agent executes the actions.

## Search problems and solutions:

A search problem is defined by five components:

1. a set of possible states that the environment can be in. **State Space**.
2. The **initial state** that the agent start in.
3. A set of one or more goals.
4. The **Actions** available for the agent.
5. The **Transition model** that specifies what each action does.
6. An **Action cost function** denoted by Action-Cost(a, s, s') that gives the cost of taking action a in state s to reach state s'.

- A sequence of actions forms a **Path**, and a solution is a path from the initial state to the goal state.
- A state space can be represented as a graph. where the nodes are the states and the edges are the actions.

## Formulating problems
