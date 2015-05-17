extern crate time;

fn main() {
    println!("--- Start ---");
    
    let start = time::precise_time_ns();

    for i in 0..100 {
        println!("Hello");
    }

    let finish = time::precise_time_ns();

    println!("{} ns", (finish - start));
    println!("{} us", (finish - start)/1000);
    println!("{} ms", (finish - start)/1000000);

    println!("--- Finished ---");
}
