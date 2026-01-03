<<<<<<< HEAD


def print_state(sticks, n):
    print()
    display_grid = [[' | '] for _ in range(n)] # Rows
    display_grid = [row * 3 for row in display_grid] # Columns

    # Go through our sticks data and place disks into the grid
    for peg_index in range(3):
        peg = sticks[peg_index]
        # 'peg' is a list like [3, 2, 1] (bottom to top)
        for disk_level in range(len(peg)):
            disk_size = peg[disk_level]
            # Format the disk to look nice
            # e.g., disk 3 becomes " 3 "
            display_grid[disk_level][peg_index] = f" {disk_size} "

    # Print the grid from the top down
    for row in range(n - 1, -1, -1):
        # 'join' combines the items in the row list into a single string
        print("".join(display_grid[row]))

    print("---------")
    print(" A  B  C ")
    print("=" * 10)

def move_disk(start, end, sticks_data, total_disks):
    """
    Moves one disk in the 'sticks_data' and prints the state.
    'total_disks' is passed to print_state for correct height.
    """
    # Use list indexing (0, 1, 2) from peg numbers (1, 2, 3)
    start_peg = sticks_data[start - 1]
    end_peg = sticks_data[end - 1]

    # Check for empty start peg (shouldn't happen in a correct algorithm)
    if not start_peg:
        print(f"Error: Tried to move from empty peg {start}")
        return

    # Move the disk
    disk = start_peg.pop()
    end_peg.append(disk)

    # Print the action
    print(f"Move disk {disk} from {start} to {end}")
    
    # Show the resulting visual state
    print_state(sticks_data, total_disks)


def hanoi(n, start, end, sticks_data, total_disks):
    """
    The recursive Tower of Hanoi logic.
    - n: number of disks to move
    - start: starting peg (1, 2, or 3)
    - end: ending peg (1, 2, or 3)
    - sticks_data: The list of lists representing the pegs
    - total_disks: The total number of disks (for printing)
    """
    if n == 1:
        # Base case: Just move the single disk
        move_disk(start, end, sticks_data, total_disks)
    else:
        # Find the 'other' peg
        other = 6 - (start + end)

        # 1. Move n-1 disks from start to 'other'
        hanoi(n - 1, start, other, sticks_data, total_disks)

        # 2. Move the 1 (largest) disk from start to end
        move_disk(start, end, sticks_data, total_disks)

        # 3. Move the n-1 disks from 'other' to end
        hanoi(n - 1, other, end, sticks_data, total_disks)

# --- Main Program ---

n = int(input("Enter number of discs: "))
start = int(input("Enter Start peg (1, 2, or 3): "))
end = int(input("Enter End peg (1, 2, or 3): "))
# Initialize the data structure
# A list of 3 empty lists (one for each peg)
Sticks = [[], [], []]
# Add the disks to the starting peg
# list(range(n, 0, -1)) creates [n, n-1, ..., 1]
# e.g., n=3 -> [3, 2, 1] (largest at the bottom)
Sticks[start - 1] = list(range(n, 0, -1))
# Print the starting position
print("--- Initial State ---")
print_state(Sticks, n)
# Start the recursion
hanoi(n, start, end, Sticks, n)
=======


def print_state(sticks, n):
    print()
    display_grid = [[' | '] for _ in range(n)] # Rows
    display_grid = [row * 3 for row in display_grid] # Columns

    # Go through our sticks data and place disks into the grid
    for peg_index in range(3):
        peg = sticks[peg_index]
        # 'peg' is a list like [3, 2, 1] (bottom to top)
        for disk_level in range(len(peg)):
            disk_size = peg[disk_level]
            # Format the disk to look nice
            # e.g., disk 3 becomes " 3 "
            display_grid[disk_level][peg_index] = f" {disk_size} "

    # Print the grid from the top down
    for row in range(n - 1, -1, -1):
        # 'join' combines the items in the row list into a single string
        print("".join(display_grid[row]))

    print("---------")
    print(" A  B  C ")
    print("=" * 10)

def move_disk(start, end, sticks_data, total_disks):
    """
    Moves one disk in the 'sticks_data' and prints the state.
    'total_disks' is passed to print_state for correct height.
    """
    # Use list indexing (0, 1, 2) from peg numbers (1, 2, 3)
    start_peg = sticks_data[start - 1]
    end_peg = sticks_data[end - 1]

    # Check for empty start peg (shouldn't happen in a correct algorithm)
    if not start_peg:
        print(f"Error: Tried to move from empty peg {start}")
        return

    # Move the disk
    disk = start_peg.pop()
    end_peg.append(disk)

    # Print the action
    print(f"Move disk {disk} from {start} to {end}")
    
    # Show the resulting visual state
    print_state(sticks_data, total_disks)


def hanoi(n, start, end, sticks_data, total_disks):
    """
    The recursive Tower of Hanoi logic.
    - n: number of disks to move
    - start: starting peg (1, 2, or 3)
    - end: ending peg (1, 2, or 3)
    - sticks_data: The list of lists representing the pegs
    - total_disks: The total number of disks (for printing)
    """
    if n == 1:
        # Base case: Just move the single disk
        move_disk(start, end, sticks_data, total_disks)
    else:
        # Find the 'other' peg
        other = 6 - (start + end)

        # 1. Move n-1 disks from start to 'other'
        hanoi(n - 1, start, other, sticks_data, total_disks)

        # 2. Move the 1 (largest) disk from start to end
        move_disk(start, end, sticks_data, total_disks)

        # 3. Move the n-1 disks from 'other' to end
        hanoi(n - 1, other, end, sticks_data, total_disks)

# --- Main Program ---

n = int(input("Enter number of discs: "))
start = int(input("Enter Start peg (1, 2, or 3): "))
end = int(input("Enter End peg (1, 2, or 3): "))
# Initialize the data structure
# A list of 3 empty lists (one for each peg)
Sticks = [[], [], []]
# Add the disks to the starting peg
# list(range(n, 0, -1)) creates [n, n-1, ..., 1]
# e.g., n=3 -> [3, 2, 1] (largest at the bottom)
Sticks[start - 1] = list(range(n, 0, -1))
# Print the starting position
print("--- Initial State ---")
print_state(Sticks, n)
# Start the recursion
hanoi(n, start, end, Sticks, n)
>>>>>>> e692b865351512c6cb2a7a8cb6210672b415bf2d
