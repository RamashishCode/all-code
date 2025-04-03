import os

# Get the current working directory
folder_path = os.getcwd()

# Loop through all files in the folder
for file_name in os.listdir(folder_path):
    if file_name.endswith((".exe", ".o")):  # Corrected: Use a tuple for multiple extensions
        file_path = os.path.join(folder_path, file_name)
        try:
            os.remove(file_path)  # Delete the file
            print(f"Deleted: {file_name}")
        except Exception as e:
            print(f"Error deleting {file_name}: {e}")

print("✅ All .exe and .o files deleted successfully!")
