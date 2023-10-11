use std::env;
use std::path::PathBuf;


fn main() {
    for (key, value) in env::vars() {
        println!("{key}: {value}");
    }
    return 0;
}