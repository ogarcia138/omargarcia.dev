import React from "react";
import "./AchievementCard.scss";

const GetDescBullets = ({descBullets, isDark}) =>
  descBullets
    ? descBullets.map((item, i) => (
        <li
          key={i}
          className={isDark ? "subTitle dark-mode-text" : "subTitle"}
        >
          {item}
        </li>
      ))
    : null;
export default function AchievementCard({cardInfo, isDark}) {
  console.log("Achievement Card Info ->", cardInfo);
  function openUrlInNewTab(url, name) {
    if (!url) {
      console.log(`URL for ${name} not found`);
      return;
    }
    var win = window.open(url, "_blank");
    win.focus();
  }
  return (
    <div className={isDark ? "dark-mode certificate-card" : "certificate-card"}>
      <div className="certificate-image-div">
        <img
          src={cardInfo.image}
          alt={cardInfo.imageAlt || "Card Thumbnail"}
          className="card-image"
        ></img>
      </div>
      <div className="certificate-detail-div">
        <h5 className={isDark ? "dark-mode card-title" : "card-title"}>
          {cardInfo.title}
        </h5>
        {/* <p className={isDark ? "dark-mode card-subtitle" : "card-subtitle"}>
          {cardInfo.description}
        </p> */}
        <p className={isDark ? "dark-mode card-subtitle" : "card-subtitle"}>
          {cardInfo.subtitle || cardInfo.description}
        </p>
        {/*Bullet List*/}
        {/* {cardInfo.descBullets && (
          <ul className="card-bullets">
            {cardInfo.descBullets.map((item, i) => (
              <li key={i}
               className={isDark ? "dark-mode subTitle" : "subTitle"}>
                {item}
              </li>
            ))}
          </ul>
        )} */}
        {cardInfo.descBullets && (
          <ul className="card-bullets">
            <GetDescBullets descBullets={cardInfo.descBullets} isDark={isDark} />
          </ul>
        )}
      </div>
      
      <div className="certificate-card-footer">
        {cardInfo.footer.map((v, i) => {
          return (
            <span
              key={i}
              className={
                isDark ? "dark-mode certificate-tag" : "certificate-tag"
              }
              onClick={() => openUrlInNewTab(v.url, v.name)}
            >
              {v.name}
            </span>
          );
        })}
      </div>
    </div>
  );
}
