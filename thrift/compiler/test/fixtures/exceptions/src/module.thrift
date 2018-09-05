namespace java.swift test.fixtures.exceptions

exception Banal { }
exception Fiery {
  1: required string message,
} (message = "message")
exception Serious {
  1: optional string sonnet,
} (message = "sonnet")

service Raiser {
  void doBland(),
  void doRaise() throws (1: Banal b, 2: Fiery f, 3: Serious s),
  string get200(),
  string get500() throws (1: Fiery f, 2: Banal b, 3: Serious s),
}
